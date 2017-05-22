import React from 'react';

class NameForm extends React.Component {
  constructor(props) {
    super(props);
    this.state = {value: ''};
    this.depo = {value: '', num: 0};

    this.handleChange = this.handleChange.bind(this);
    this.handleSubmit = this.handleSubmit.bind(this);
  }

  handleChange(event) {
    this.setState({value: event.target.value});
  }

  handleSubmit(event) {
    this.depo.num = this.state.value;
    if (this.depo.num < 13) {
        //
        alert("You are young");
    }
    else if (this.depo.num >= 18) {
        alert("You are old");
        console.log("you have biggol tittays");
    }
    else {
        alert("You are a teenager");
    }
    event.preventDefault();
  }

  render() {
    return (
      <form onSubmit={this.handleSubmit}>
        <label>
          Name:
          <input type="text" value={this.state.value} onChange={this.handleChange} />
        </label>
        <input type="submit" value="Submit" />
      </form>
    );
  }
}

export default NameForm;
//ReactDOM.render(
//  <NameForm />,
//  document.getElementById('root')
//);
